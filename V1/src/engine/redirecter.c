#include "engine.h"
#include "graphics.h"
#include "mymath.h"
#include "test.h"

void module_service(int service, _kernel_swi_regs *r) {
    switch (service) {
        case 0: /* Init */
            setup_trig_lookup_tables();
            graphics_setup(r->r[0] == 1);
            break;
        case 1: /* Shutdown */
            graphics_end();
            break;
        case 2: /* SetClip */
            set_clip(r->r[0], r->r[1], r->r[2], r->r[3]);
            break;
        case 3: /* ClearScreen */
            clear_screen(r->r[0]);
            break;
        case 4: /* FlipBanks */
            end_frame();
            break;
        case 5: /* DrawPoint */
            plot_pixel(r->r[0], r->r[1], r->r[2]);
            break;
        case 6: /* DrawLine */
            draw_line(r->r[0], r->r[1], r->r[2], r->r[3], r->r[4]);
            break;
        case 7: /* DrawTriangle */
        {
            point_2d v0;
            point_2d v1;
            point_2d v2;
            v0.x = r->r[0];
            v0.y = r->r[1];
            v1.x = r->r[2];
            v1.y = r->r[3];
            v2.x = r->r[4];
            v2.y = r->r[5];
            draw_triangle(&v0, &v1, &v2, r->r[6]);
            break;
        }
        case 8: /* DrawGouraudTriangle */
        {
            point_2d v0;
            point_2d v1;
            point_2d v2;
            v0.x = r->r[0];
            v0.y = r->r[1];
            v1.x = r->r[2];
            v1.y = r->r[3];
            v2.x = r->r[4];
            v2.y = r->r[5];
            draw_gouraud_triangle(&v0, &v1, &v2, r->r[6], r->r[7], r->r[8], false);
            break;
        }
        case 9: /* PerformanceTest2D */
            performance_test();
            break;
        case 10: /* Set render type */
            render_mode = r->r[0];
            break;
        case 11: /* ObjectSize */
        {
            int size = calculate_object_size(r->r[0], r->r[1]);
            r->r[0] = size;
            break;
        }
        case 12: /* ShapeSize */
            r->r[0] = sizeof(shape_type);
            break;
        case 13: /* VertexSize */
            r->r[0] = sizeof(vertex_type);
            break;
        case 14: /* FaceSize */
            r->r[0] = sizeof(face_type);
            break;
        case 15: /* InitialiseObject */
        {
            shape_type *shape = (shape_type *)r->r[0];
            initialise_object(shape);
            break;
        }
        case 16: /* RenderObject */
        {
            shape_type *shape = (shape_type *)r->r[0];
            r->r[0] = render_object(shape);
            break;
        }
        case 17: /* TransformObject */
        {
            shape_type *shape = (shape_type *)r->r[0];
            transform_object(shape,
                             r->r[1], r->r[2], r->r[3],  // Translation
                             r->r[4], r->r[5], r->r[6],  // Rotation
                             r->r[7]);                   // Scale
            break;
        }
        case 18: /* SetAmbientLight */
            ambient_light.r = (r->r[0] & 0x0000FF) / 255.0;
            ambient_light.g = ((r->r[0] & 0x00FF00) >> 8) / 255.0;
            ambient_light.b = ((r->r[0] & 0xFF0000) >> 16) / 255.0;
            break;
        case 19: /* SetDirectionalLight */
            directional_light.r = (r->r[0] & 0x0000FF) / 255.0;
            directional_light.g = ((r->r[0] & 0x00FF00) >> 8) / 255.0;
            directional_light.b = ((r->r[0] & 0xFF0000) >> 16) / 255.0;
            light_source.x = (float)r->r[1] / 255.0;
            light_source.y = (float)r->r[2] / 255.0;
            light_source.z = (float)r->r[3] / 255.0;
            break;
        case 20:                              /* SetNormalsVisibility */
            set_normals_visibility(r->r[0]);  // Show normals
            break;
        case 21: /* RenderFrame */
            r->r[0] = render_frame();
            break;
    }
}
/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-auguste.thomann
** File description:
** castmania
*/

#include "castmania.h"
#include <stdio.h>

void div_manage(instruction_t *data)
{
    exec_div(data->operation);
    if (data->output_type == VERBOSE) {
        if (((division_t *)data->operation)->div_type == INTEGER) {
            printf("%d\n",
                ((integer_op_t *)((division_t *)data->operation)->div_op)->res);
        }
        else if (((division_t *)data->operation)->div_type == DECIMALE) {
            printf("%f\n",
            ((decimale_op_t *)((division_t *)data->operation)->div_op)->res);
        }
    }
}

void add_manage(instruction_t *data)
{
    exec_add(data->operation);
    if (data->output_type == VERBOSE)
    {
        printf("%d\n",
        ((addition_t *)((add_type_t *)data->operation))->add_op.res);
    }
}

void exec_operation(instruction_type_t instruction_type, void *data)
{
    instruction_t *instruct;
    instruct = (instruction_t *)data;

    if (instruction_type == DIV_OPERATION)
        div_manage(data);
    else if (instruction_type == ADD_OPERATION)
        add_manage(data);
}

void exec_instruction(instruction_type_t instruction_type, void *data)
{
    if (instruction_type == ADD_OPERATION ||
        instruction_type == DIV_OPERATION)
        exec_operation(instruction_type, data);
    else if (instruction_type == PRINT_INT)
        printf("%d\n", *(int *)data);
    else if (instruction_type == PRINT_FLOAT)
        printf("%f\n", *(float *)data);
}
#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


GLfloat cubeVertices[] =
{
    -0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f,  0.0f,
    0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f,  0.0f,
    0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f,  1.0f,
    0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f,  1.0f,
    -0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f,  1.0f,
    -0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f,  0.0f,

    -0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  0.0f,  0.0f,
    0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  1.0f,  0.0f,
    0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  1.0f,  1.0f,
    0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  1.0f,  1.0f,
    -0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  0.0f,  1.0f,
    -0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  0.0f,  0.0f,

    -0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  1.0f,  0.0f,
    -0.5f,  0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  1.0f,  1.0f,
    -0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  0.0f,  1.0f,
    -0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  0.0f,  1.0f,
    -0.5f, -0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  0.0f,  0.0f,
    -0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  1.0f,  0.0f,

    0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  1.0f,  0.0f,
    0.5f,  0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  1.0f,  1.0f,
    0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  0.0f,  1.0f,
    0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  0.0f,  1.0f,
    0.5f, -0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  0.0f,  0.0f,
    0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  1.0f,  0.0f,

    -0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  0.0f,  1.0f,
    0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  1.0f,  1.0f,
    0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  1.0f,  0.0f,
    0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  1.0f,  0.0f,
    -0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  0.0f,  0.0f,
    -0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  0.0f,  1.0f,

    -0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  0.0f,  1.0f,
    0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  1.0f,  1.0f,
    0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  1.0f,  0.0f,
    0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  1.0f,  0.0f,
    -0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  0.0f,  0.0f,
    -0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  0.0f,  1.0f
};


GLfloat planeVertices[] =
{ 
    0.5f,  -0.5f,  0.5f,  0.0f, 1.0f, 0.0f,  1.0f, 0.0f,
    -0.5f, -0.5f,  0.5f,  0.0f, 1.0f, 0.0f,  0.0f, 0.0f,
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, 0.0f,  0.0f, 1.0f,
    0.5f,  -0.5f,  0.5f,  0.0f, 1.0f, 0.0f,  1.0f, 0.0f,
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, 0.0f,  0.0f, 1.0f,
    0.5f,  -0.5f, -0.5f,  0.0f, 1.0f, 0.0f,  1.0f, 1.0f
};


GLfloat triangleVertices[] =
{
    -0.5f, -0.5f, 0.0f,
    0.5f, -0.5f, 0.0f,
    0.0f,  0.5f, 0.0f
};


glm::vec3 pointLightPositions[] = {
    glm::vec3(2.0f, -0.5f, 1.0f),
};


class BasicShape
{
    public:
        string shapeType;

        GLfloat shapeAngle;

        glm::vec3 shapePosition;
        glm::vec3 shapeRotationAxis;
        glm::vec3 shapeScale;

        GLuint shapeVAO, shapeVBO, shapeEBO, shapeDiffuseID, shapeSpecularID;

        string shapeDiffusePath, shapeSpecularPath;


        BasicShape(string type, glm::vec3 position)
        {
            this->shapeType = type;
            this->shapePosition = position;
            this->shapeScale = glm::vec3(1.0f, 1.0f, 1.0f);
            this->shapeAngle = 0;
            this->shapeRotationAxis = glm::vec3(0.0f, 1.0f, 0.0f);

            glGenVertexArrays(1, &shapeVAO);
            glGenBuffers(1, &shapeVBO);
            glBindBuffer(GL_ARRAY_BUFFER, shapeVBO);

            if (type == "cube")
                glBufferData(GL_ARRAY_BUFFER, sizeof(cubeVertices), cubeVertices, GL_STATIC_DRAW);
            else if (type == "plane")
                glBufferData(GL_ARRAY_BUFFER, sizeof(planeVertices), planeVertices, GL_STATIC_DRAW);

            glBindVertexArray(shapeVAO);
            glEnableVertexAttribArray(0);
            glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
            glEnableVertexAttribArray(1);
            glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
            glEnableVertexAttribArray(2);
            glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(6 * sizeof(GLfloat)));
            glBindVertexArray(0);
        }


        void drawShape(Shader shader, glm::mat4 view, glm::mat4 projection, Camera camera)
        {
            shader.Use();

            GLint modelLoc = glGetUniformLocation(shader.Program, "model");
            GLint viewLoc = glGetUniformLocation(shader.Program, "view");
            GLint projLoc = glGetUniformLocation(shader.Program, "projection");
            glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
            glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
            glUniform3f(glGetUniformLocation(shader.Program, "viewPos"), camera.cameraPosition.x, camera.cameraPosition.y, camera.cameraPosition.z);

            glUniform3f(glGetUniformLocation(shader.Program, "pointLights[0].position"), pointLightPositions[0].x, pointLightPositions[0].y, pointLightPositions[0].z);
            glUniform3f(glGetUniformLocation(shader.Program, "pointLights[0].ambient"), 0.05f, 0.05f, 0.05f);
            glUniform3f(glGetUniformLocation(shader.Program, "pointLights[0].diffuse"), 1.0f, 1.0f, 1.0f);
            glUniform3f(glGetUniformLocation(shader.Program, "pointLights[0].specular"), 1.0f, 1.0f, 1.0f);;
            glUniform1f(glGetUniformLocation(shader.Program, "pointLights[0].constant"), 1.0f);
            glUniform1f(glGetUniformLocation(shader.Program, "pointLights[0].linear"), 0.009);
            glUniform1f(glGetUniformLocation(shader.Program, "pointLights[0].quadratic"), 0.0032);

            glm::mat4 model;
            model = glm::translate(model, shapePosition);
            model = glm::scale(model, shapeScale);
            model = glm::rotate(model, shapeAngle, shapeRotationAxis);
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

            if (shapeDiffusePath != "" && shapeSpecularPath != "")
            {
                glActiveTexture(GL_TEXTURE0);
                glUniform1i(glGetUniformLocation(shader.Program, "material.texture_diffuse1"), 0);
                glBindTexture(GL_TEXTURE_2D, shapeDiffuseID);
                glActiveTexture(GL_TEXTURE1);
                glUniform1i(glGetUniformLocation(shader.Program, "material.texture_specular1"), 1);
                glBindTexture(GL_TEXTURE_2D, shapeSpecularID);
                glUniform1f(glGetUniformLocation(shader.Program, "material.shininess"), 15.0f);
                glActiveTexture(GL_TEXTURE0);
            }

            glBindVertexArray(shapeVAO);
            if (this->shapeType == "cube")
                glDrawArrays(GL_TRIANGLES, 0, 36);
            else if (this->shapeType == "plane")
                glDrawArrays(GL_TRIANGLES, 0, 6);
            glBindVertexArray(0);

            if (shapeDiffusePath != "" && shapeSpecularPath != "")
            {
                glActiveTexture(GL_TEXTURE0);
                glBindTexture(GL_TEXTURE_2D, 0);
                glActiveTexture(GL_TEXTURE1);
                glBindTexture(GL_TEXTURE_2D, 0);
            }
        }


        string getType()
        {
            return shapeType;
        }


        glm::vec3 getPosition()
        {
            return shapePosition;
        }


        GLfloat getAngle()
        {
            return shapeAngle;
        }


        glm::vec3 getRotationAxis()
        {
            return shapeRotationAxis;
        }


        glm::vec3 getScale()
        {
            return shapeScale;
        }


        GLuint getVAO()
        {
            return shapeVAO;
        }


        string getDiffusePath()
        {
            return shapeDiffusePath;
        }


        string getSpecPath()
        {
            return shapeSpecularPath;
        }


        void setPosition(glm::vec3 position)
        {
            this->shapePosition = position;
        }


        void setAngle(GLfloat angle)
        {
            this->shapeAngle = angle;
        }


        void setRotationAxis(glm::vec3 rotationAxis)
        {
            this->shapeRotationAxis = rotationAxis;
        }


        void setScale(glm::vec3 scale)
        {
            this->shapeScale = scale;
        }


        void setDiffuseTexture(string _texDiffPath)
        {
            this->shapeDiffusePath = string(_texDiffPath);

            glGenTextures(1, &shapeDiffuseID);
            int width, height, numComponents;

            unsigned char* texDiffuseData = stbi_load(shapeDiffusePath.c_str(), &width, &height, &numComponents, numComponents);
            if (texDiffuseData == NULL)
                std::cerr << "FAILED LOADING DIFFUSE : " << shapeDiffusePath << std::endl;

            glBindTexture(GL_TEXTURE_2D, shapeDiffuseID);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, texDiffuseData);
            glGenerateMipmap(GL_TEXTURE_2D);
            stbi_image_free(texDiffuseData);

            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
            glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        }


        void setSpecularTexture(string _texSpecPath)
        {
            this->shapeSpecularPath = string(_texSpecPath);

            glGenTextures(1, &shapeSpecularID);
            int width, height, numComponents;

            unsigned char* texSpecularData = stbi_load(shapeSpecularPath.c_str(), &width, &height, &numComponents, numComponents);
            if (texSpecularData == NULL)
                std::cerr << "FAILED LOADING SPECULAR : " << shapeSpecularPath << std::endl;

            glBindTexture(GL_TEXTURE_2D, shapeSpecularID);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, texSpecularData);
            glGenerateMipmap(GL_TEXTURE_2D);
            stbi_image_free(texSpecularData);

            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
            glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        }
};

#endif
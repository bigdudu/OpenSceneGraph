/* -*-c++-*- OpenSceneGraph - Copyright (C) 1998-2014 Robert Osfield
 *  Copyright (C) 2014 Pawel Ksiezopolski
 *
 * This library is open source and may be redistributed and/or modified under
 * the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or
 * (at your option) any later version.  The full license is in LICENSE file
 * included with this distribution, and on the openscenegraph.org website.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * OpenSceneGraph Public License for more details.
 *
*/
#ifndef SHAPE_TO_GEOMETRY
#define SHAPE_TO_GEOMETRY 1
#include <osg/Geometry>
#include <osg/Geode>
#include <osg/ShapeDrawable>
#include <osg/NodeVisitor>


osg::Geode* convertShapeToGeode(const osg::Shape& shape, const osg::TessellationHints* hints);

osg::Geode* convertShapeToGeode(const osg::Shape& shape, const osg::TessellationHints* hints, const osg::Vec4& color);


#endif

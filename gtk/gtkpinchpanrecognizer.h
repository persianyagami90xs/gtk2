/*
 * Copyright © 2012 Red Hat Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * Authors: Benjamin Otte <otte@gnome.org>
 */

#if !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif

#ifndef __GTK_PINCH_PAN_RECOGNIZER_H__
#define __GTK_PINCH_PAN_RECOGNIZER_H__

#include <gtk/gtkgesturerecognizer.h>

G_BEGIN_DECLS

#define GTK_TYPE_PINCH_PAN_RECOGNIZER           (gtk_pinch_pan_recognizer_get_type ())
#define GTK_PINCH_PAN_RECOGNIZER(obj)           (G_TYPE_CHECK_INSTANCE_CAST (obj, GTK_TYPE_PINCH_PAN_RECOGNIZER, GtkPinchPanRecognizer))
#define GTK_PINCH_PAN_RECOGNIZER_CLASS(cls)     (G_TYPE_CHECK_CLASS_CAST (cls, GTK_TYPE_PINCH_PAN_RECOGNIZER, GtkPinchPanRecognizerClass))
#define GTK_IS_PINCH_PAN_RECOGNIZER(obj)        (G_TYPE_CHECK_INSTANCE_TYPE (obj, GTK_TYPE_PINCH_PAN_RECOGNIZER))
#define GTK_IS_PINCH_PAN_RECOGNIZER_CLASS(obj)  (G_TYPE_CHECK_CLASS_TYPE (obj, GTK_TYPE_PINCH_PAN_RECOGNIZER))
#define GTK_PINCH_PAN_RECOGNIZER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PINCH_PAN_RECOGNIZER, GtkPinchPanRecognizerClass))

typedef struct _GtkPinchPanRecognizer           GtkPinchPanRecognizer;
typedef struct _GtkPinchPanRecognizerClass      GtkPinchPanRecognizerClass;
typedef struct _GtkPinchPanRecognizerPrivate    GtkPinchPanRecognizerPrivate;

struct _GtkPinchPanRecognizer
{
  GtkGestureRecognizer parent;

  GtkPinchPanRecognizerPrivate *priv;
};

struct _GtkPinchPanRecognizerClass
{
  GtkGestureRecognizerClass parent_class;

  /* Padding for future expansion */
  void (*_gtk_reserved0) (void);
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
  void (*_gtk_reserved5) (void);
  void (*_gtk_reserved6) (void);
  void (*_gtk_reserved7) (void);
};

GType                 gtk_pinch_pan_recognizer_get_type       (void) G_GNUC_CONST;

GtkEventRecognizer *  gtk_pinch_pan_recognizer_new            (void);


G_END_DECLS

#endif /* __GTK_PINCH_PAN_RECOGNIZER_H__ */
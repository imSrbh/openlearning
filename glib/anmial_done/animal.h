#pragma once

#include <glib.h>
#include <glib-object.h>

G_BEGIN_DECLS

typedef struct _TestAnimal TestAnimal;
typedef struct _TestAnimalClass TestAnimalClass;
// typedef struct _TestAnimalPrivate TestAnimalPrivate;


#define TEST_TYPE_ANIMAL test_animal_get_type ()
//NEW STYLE
G_DECLARE_DERIVABLE_TYPE (TestAnimal, test_animal, TEST, ANIMAL, GObject)

/*
// OLD STYLE: This is how we used to do this. This has some advantages over
// the new style, in that the instance structure could be changed and have
// public variabels that way. This has been replaced with properties instead.
// We will come to that later.
#define TEST_TYPE_ANIMAL (test_animal_get_type ())
#define TEST_ANIMAL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TEST_TYPE_ANIMAL, TestAnimal))
#define TEST_IS_ANIMAL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TEST_TYPE_ANIMAL))
#define TEST_ANIMAL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TEST_TYPE_ANIMAL, TestAnimalClass))
#define TEST_ANIMAL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TEST_TYPE_ANIMAL))
#define TEST_ANIMAL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TEST_TYPE_ANIMAL, TestAnimalClass))

struct _TestAnimal {
  GObject padding_instance;
  
  gpointer padding[8];
};
*/

struct _TestAnimalClass {
  GObjectClass parent_class;
  
  void (* make_sound)(TestAnimal *);
  
  void (* move)(TestAnimal *, gint, gint);
  
  gpointer padding[8];
};


TestAnimal *
test_animal_new ();

void
test_animal_make_sound (TestAnimal * self);

void
test_animal_move (TestAnimal * self, gint x, gint y);


G_END_DECLS

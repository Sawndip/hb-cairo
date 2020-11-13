/*
 * Cairo library: pattern
 *
 * Copyright 2013 Oscar Hernandez Suarez <oscar.hernandez.suarez@gmail.com>
 *
 */

#include "hbcairo.h"

HB_FUNC( CAIRO_PATTERN_ADD_COLOR_STOP_RGB )
{
   cairo_pattern_t * pPattern = hb_cairo_pattern_param( 1 );

   if( pPattern )
      cairo_pattern_add_color_stop_rgb( pPattern, hb_parnd( 2 ), hb_parnd( 3 ), hb_parnd( 4 ), hb_parnd( 5 ) );
}

HB_FUNC( CAIRO_PATTERN_ADD_COLOR_STOP_RGBA )
{
   cairo_pattern_t * pPattern = hb_cairo_pattern_param( 1 );

   if( pPattern )
      cairo_pattern_add_color_stop_rgba( pPattern, hb_parnd( 2 ), hb_parnd( 3 ), hb_parnd( 4 ), hb_parnd( 5 ), hb_parnd( 6 ) );
}

HB_FUNC( CAIRO_PATTERN_GET_COLOR_STOP_COUNT )
{
#if CAIRO_VERSION >= CAIRO_VERSION_ENCODE( 1, 4, 0 )
   cairo_pattern_t * pPattern = hb_cairo_pattern_param( 1 );

   if( pPattern )
   {
      int iCount;

      hb_retni( cairo_pattern_get_color_stop_count( pPattern, &iCount ) );
      hb_storni( iCount, 2 );
   }
   else
      hb_retni( -1 );
#else
   hb_cairo_pattern_param( 1 ); /* Parameter validation */
   hb_retni( -1 );              /* There is no good CAIRO_STATUS_* for this */
#endif
}

HB_FUNC( CAIRO_PATTERN_GET_COLOR_STOP_RGBA )
{
#if CAIRO_VERSION >= CAIRO_VERSION_ENCODE( 1, 4, 0 )
   cairo_pattern_t * pPattern = hb_cairo_pattern_param( 1 );

   if( pPattern )
   {
      double dOffset;
      double dRed;
      double dGreen;
      double dBlue;
      double dAlpha;

      hb_retni( cairo_pattern_get_color_stop_rgba( pPattern, hb_parni( 2 ), &dOffset, &dRed, &dGreen, &dBlue, &dAlpha ) );

      hb_stornd( dOffset, 3 );
      hb_stornd( dRed, 4 );
      hb_stornd( dGreen, 5 );
      hb_stornd( dBlue, 6 );
      hb_stornd( dAlpha, 7 );
   }
   else
      hb_retni( -1 );
#else
   hb_cairo_pattern_param( 1 ); /* Parameter validation */
   hb_retni( -1 );              /* There is no good CAIRO_STATUS_* for this */
#endif
}

HB_FUNC( CAIRO_PATTERN_CREATE_RGB )
{
   hb_cairo_pattern_ret( cairo_pattern_create_rgb( hb_parnd( 1 ), hb_parnd( 2 ), hb_parnd( 3 ) ) );
}

HB_FUNC( CAIRO_PATTERN_CREATE_RGBA )
{
   hb_cairo_pattern_ret( cairo_pattern_create_rgba( hb_parnd( 1 ), hb_parnd( 2 ), hb_parnd( 3 ), hb_parnd( 3 ) ) );
}

HB_FUNC( CAIRO_PATTERN_GET_RGBA )
{
#if CAIRO_VERSION >= CAIRO_VERSION_ENCODE( 1, 4, 0 )
   cairo_pattern_t * pPattern = hb_cairo_pattern_param( 1 );

   if( pPattern )
   {
      double dRed;
      double dGreen;
      double dBlue;
      double dAlpha;

      hb_retni( cairo_pattern_get_rgba( pPattern, &dRed, &dGreen, &dBlue, &dAlpha ) );

      hb_stornd( dRed, 2 );
      hb_stornd( dGreen, 3 );
      hb_stornd( dBlue, 4 );
      hb_stornd( dAlpha, 5 );
   }
   else
      hb_retni( -1 );
#else
   hb_cairo_pattern_param( 1 ); /* Parameter validation */
   hb_retni( -1 );              /* There is no good CAIRO_STATUS_* for this */
#endif
}

HB_FUNC( CAIRO_PATTERN_CREATE_FOR_SURFACE )
{
   hb_cairo_pattern_ret( cairo_pattern_create_for_surface( hb_cairo_surface_param( 1 ) ) );
}

HB_FUNC( CAIRO_PATTERN_GET_SURFACE )
{
#if CAIRO_VERSION >= CAIRO_VERSION_ENCODE( 1, 4, 0 )
   cairo_pattern_t * pPattern = hb_cairo_pattern_param( 1 );

   if( pPattern )
   {
      cairo_surface_t * pSurface;

      hb_retni( cairo_pattern_get_surface( pPattern, &pSurface ) );

      hb_cairoSurfaceStor( pSurface, 2 );
   }
   else
      hb_retni( -1 );
#else
   hb_cairo_pattern_param( 1 ); /* Parameter validation */
   hb_retni( -1 );              /* There is no good CAIRO_STATUS_* for this */
#endif
}

HB_FUNC( CAIRO_PATTERN_CREATE_LINEAR )
{
   hb_cairo_pattern_ret( cairo_pattern_create_linear( hb_parnd( 1 ), hb_parnd( 2 ), hb_parnd( 3 ), hb_parnd( 4 ) ) );
}

HB_FUNC( CAIRO_PATTERN_GET_LINEAR_POINTS )
{
#if CAIRO_VERSION >= CAIRO_VERSION_ENCODE( 1, 4, 0 )
   cairo_pattern_t * pPattern = hb_cairo_pattern_param( 1 );

   if( pPattern )
   {
      double dX0;
      double dY0;
      double dX1;
      double dY1;

      hb_retni( cairo_pattern_get_linear_points( pPattern, &dX0, &dY0, &dX1, &dY1 ) );

      hb_stornd( dX0, 2 );
      hb_stornd( dY0, 3 );
      hb_stornd( dX1, 4 );
      hb_stornd( dY1, 5 );
   }
   else
      hb_retni( -1 );
#else
   hb_cairo_pattern_param( 1 ); /* Parameter validation */
   hb_retni( -1 );              /* There is no good CAIRO_STATUS_* for this */
#endif
}

HB_FUNC( CAIRO_PATTERN_CREATE_RADIAL )
{
   hb_cairo_pattern_ret( cairo_pattern_create_radial( hb_parnd( 1 ), hb_parnd( 2 ), hb_parnd( 3 ), hb_parnd( 4 ), hb_parnd( 5 ), hb_parnd( 6 ) ) );
}

HB_FUNC( CAIRO_PATTERN_GET_RADIAL_CIRCLES )
{
#if CAIRO_VERSION >= CAIRO_VERSION_ENCODE( 1, 4, 0 )
   cairo_pattern_t * pPattern = hb_cairo_pattern_param( 1 );

   if( pPattern )
   {
      double dX0;
      double dY0;
      double dR0;
      double dX1;
      double dY1;
      double dR1;

      hb_retni( cairo_pattern_get_radial_circles( pPattern, &dX0, &dY0, &dR0, &dX1, &dY1, &dR1 ) );

      hb_stornd( dX0, 2 );
      hb_stornd( dY0, 3 );
      hb_stornd( dR0, 4 );
      hb_stornd( dX1, 5 );
      hb_stornd( dY1, 6 );
      hb_stornd( dR1, 7 );
   }
   else
      hb_retni( -1 );
#else
   hb_cairo_pattern_param( 1 ); /* Parameter validation */
   hb_retni( -1 );              /* There is no good CAIRO_STATUS_* for this */
#endif
}

HB_FUNC( CAIRO_PATTERN_STATUS )
{
   cairo_pattern_t * pPattern = hb_cairo_pattern_param( 1 );

   if( pPattern )
      hb_retni( cairo_pattern_status( pPattern ) );
   else
      hb_retni( -1 );
}

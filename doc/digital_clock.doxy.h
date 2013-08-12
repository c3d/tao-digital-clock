/**
 * @~english
 * @taomoduledescription{DigitalClock, Digital Clock}
 * <tt>import DigitalClock</tt> - Shows a digital clock.@n
 *
 * You can use the Digital Clock module in your presentation if you want
 * to display the time like a traditional alarm clock does.
 *
 * For example, the following document will show a nice clock
 * 40 pixels high:
 * @include digital_clock.ddd
 *
 * @image html digital_clock.png "Digital clock"
 * @endtaomoduledescription{DigitalClock}
 *
 * @~french
 * @taomoduledescription{DigitalClock, Horloge Numérique}
 * <tt>import DigitalClock</tt> - Affiche une horloge numérique.@n
 *
 * Ce module vous permet d'afficher l'heure dans votre présentation sous une
 * forme qui ressemble à une pendule numérique LCD ou à LED.
 *
 * Par exemple, le document qui suit affiche une horloge de 40 pixels de haut :
 * @include digital_clock.ddd
 *
 * @image html digital_clock.png "Une pendule numérique"
 * @endtaomoduledescription{DigitalClock}
 *
 * @~
 * @{
 */


//
// Settings
//


/**
 * @~english
 * The color for "ON" segments.
 * @~french
 * La couleur des segments allumés.
 */
text dc_segment_color_on  = "#229988";
/**
 * @~english
 * The color for "OFF" segments.
 * @~french
 * La couleur des segments éteints.
 */
text dc_segment_color_off = "#004477";
/**
 * @~english
 * The display's background color.
 * @~french
 * La couleur du fond.
 */
text dc_background_color  = "#003366";
/**
 * @~english
 * Whether or not to display 6 and 9 with a horizontal bar
 *   @li @c "off" Do not display a horizontal bar
 *   @li @c "on"  Display a horizontal bar
 * @~french
 * Permet d'afficher le 6 et le 9 avec ou sans barre horizontale.
 *   @li @c "off" N'affiche pas la barre horizontale
 *   @li @c "on"  Affiche la barre horizontale
 */
text dc_hbar_6_9          = "off";
/**
 * @~english
 * Whether or not to display the hour with a leading zero.
 *   @li @c "true"  Display a leading zero
 *   @li @c "false" Do not display a leading zero
 * @~french
 * Permet d'afficher ou non le premier zéro de l'heure.
 *   @li @c "true"  Affiche le zéro
 *   @li @c "false" N'affiche pas le zéro
 */
text dc_hours_leading_zero = "false";
/**
 * @~english
 * Whether or not the clock displays seconds
 *   @li @c "true"  Display hours, minutes and seconds
 *   @li @c "false" Display hours and minutes only
 * @~french
 * Permet d'afficher ou non les secondes.
 *   @li @c "true"  Affiche les heures, minutes et secondes.
 *   @li @c "false" Affiche les heures et minutes seulement.
 */
text dc_show_seconds = "false";
/**
 * @~english
 * The time to display
 * If @ref dc_time is -1.0, use current time. Otherwise, @ref dc_time is
 * the time to to display, expressed in seconds since Jan 1, 1970 (POSIX).
 * @~french
 * L'heure à afficher.
 * Si @ref dc_time vaut -1.0, l'heure courante est utilisée. Sinon,
 * @ref dc_time est l'heure à afficher, exprimée en secondes depuis le 1er
 * janvier 1970 (POSIX).
 */
real dc_time = -1.0;


/**
 * @~english
 * Shows a digital clock with specified size and position.
 * The clock is centered at (@a cX, @a cY) and z=0.
 * By default, it shows the current local time. You can display
 * the time for any other date by setting @ref dc_time accordingly. Note
 * however that dc_time is always shown in local time format. \n
 *
 * The digits are similar in shape with those of real digital clocks
 * with LED, VFD or LCD displays: they are made of 7 segments that are
 * either on or off. The color for each state is configurable with
 * @ref dc_segment_color_on and @ref dc_segment_color_off, the background
 * being controlled by @ref dc_background_color. \n
 *
 * The clock has a number of other configuration options. You may
 * show or hide the leading zero for the hours display (@ref
 * dc_hours_leading_zero); you may change the format to hours:minutes or
 * hours:minutes:seconds (@ref dc_show_seconds). You may even select how
 * 6 and 9 and drawn (with or without a horizontal bar), thanks to
 * @ref dc_hbar_6_9. \n
 *
 * Currently, only the 24-hour format is supported; you cannot switch to
 * the AM/PM format.
 *
 * @param cX x coordinate of the clock's center
 * @param cY y coordinate of the clock's center
 * @param cH the clock's height. The width is 2.86555 * @a cH when the
 *    clock shows only hours and minutes, and 4.5042 * @a cH when seconds
 *     are enabled.
 *
 * @~french
 * Affiche une horloge numérique.
 * L'horloge est centrée en (@a cX, @a cY) sur le plan z = 0.
 * Par défaut, elle affiche l'heure locale courante. Vous pouvez afficher
 * l'heure de n'importe quelle autre moment en définissant @ref dc_time. \n
 *
 * Les chiffres ont une forme similaire à ceux que l'on trouve sur certaines
 * horloges numériques à affichage LCD, VFD ou LCD : ils sont formés de sept
 * segments allumés ou éteints. La couleur de chaque état est configurable
 * grâce à @ref dc_segment_color_on et @ref dc_segment_color_off, la couleur
 * du fond étant @ref dc_background_color. \n
 *
 * L'horloge dispose d'autres options de configuration. Voyez la documentation
 * de @ref dc_hours_leading_zero, @ref dc_show_seconds et @ref dc_hbar_6_9. \n
 *
 * Seul le format d'affichage sur 24 heures est supporté.
 *
 * @param cX Abscisse du centre de l'horloge, en pixels.
 * @param cY Ordonnée du centre de l'horloge, en pixels.
 * @param cH Hauteur de l'horloge en pixels. La largeur est 2.86555 * @a cH
 *    lorsque l'heure et les minutes seulement sont affichées, et
 *    4.5042 * @a cH lorsque les secondes sont également affichéees.
 */
digital_clock(real cX, real cY, real cH);

/**
 * @~english
 * Shows a digital clock of height 238 px at (@a x, @a y).
 * @~french
 * Affiche une horloge numérique.
 * L'horloge est centrée en (@a x, @a y) et sa hauteur est 238 pixels.
 */
digital_clock(real x, real y);

/**
 * @~english
 * Shows a digital clock of height 238 px at (0, 0).
 * @~french
 * Affiche une horloge numérique au centre de l'écran.
 * L'horloge est centrée en (0, 0) et sa hauteur est 238 pixels.
 */
digital_clock();

/**
 * @}
 */

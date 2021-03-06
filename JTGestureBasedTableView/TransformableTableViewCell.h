/*
 * This file is part of the JTGestureBasedTableView package.
 * (c) James Tang <mystcolor@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <UIKit/UIKit.h>

@interface TransformableTableViewCell : UITableViewCell

@property (nonatomic, assign) CGFloat  finishedHeight;
@property (nonatomic, retain) UIColor *tintColor;   // default is white color

@end

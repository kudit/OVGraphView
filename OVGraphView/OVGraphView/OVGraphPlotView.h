//
//  OVGraphView.h
//  OVGraphView
//
//  Created by Owen Voorhees on 8/8/12.
//  Copyright (c) 2012 Owen Voorhees. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OVGraphViewPoint.h"
#import "OVGraphYIndicatorView.h"
@class OVPlotScrollView;
@interface OVGraphPlotView : UIView <UIScrollViewDelegate>{
    double yscale; // change this to double because if there are more than the number of available pixels in a column, all the columns will be 0 height.
    int spacebetweenpoints;
    UIColor *opaquecolor;
    UIColor *lightercolor;
    UIColor *lightestcolor;
    int visiblexcoordinate;
    BOOL dragging;
    NSTimer *continuousscrolltimer;
    NSTimer *oppcontinuousscrolltimer;
    float scrollrate;
   

}
-(void)setPlotViewPoints:(NSArray *)points Reversed:(BOOL)reversebool;
@property(nonatomic)NSArray *plotpoints;
@property(nonatomic)OVPlotScrollView *delegate;

@end

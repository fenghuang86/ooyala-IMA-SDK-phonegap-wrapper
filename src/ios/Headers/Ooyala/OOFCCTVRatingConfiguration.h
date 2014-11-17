//
// Created by Jon Slenk on 8/26/14.
// Copyright (c) 2014 Ooyala, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

#define OOFCCTVRATINGCONFIGURATION_DURATION_NONE 0
#define OOFCCTVRATINGCONFIGURATION_DURATION_FOR_EVER CGFLOAT_MAX
#define OOFCCTVRATINGCONFIGURATION_DEFAULT_TIMER OOFCCTVRATINGCONFIGURATION_DURATION_NONE
#define OOFCCTVRATINGCONFIGURATION_DEFAULT_POSITION OOFCCTvRatingsPositionTopLeft
#define OOFCCTVRATINGCONFIGURATION_DEFAULT_SCALE 0.2
#define OOFCCTVRATINGCONFIGURATION_DEFAULT_OPACITY 0.9

typedef NS_ENUM( NSInteger, OOFCCTvRatingsPosition ) {
  OOFCCTvRatingsPositionTopLeft,
  OOFCCTvRatingsPositionTopRight,
  OOFCCTvRatingsPositionBottomLeft,
  OOFCCTvRatingsPositionBottomRight
};

@interface OOFCCTVRatingConfiguration : NSObject
@property (nonatomic, readonly) int durationSeconds;
@property (nonatomic, readonly) OOFCCTvRatingsPosition position;
@property (nonatomic, readonly) CGFloat scale;
@property (nonatomic, readonly) CGFloat opacity;
-(instancetype) init;
-(instancetype) initWithDurationSeconds:(int)durationSeconds position:(OOFCCTvRatingsPosition)position scale:(CGFloat)scale opacity:(CGFloat)opacity;
@end
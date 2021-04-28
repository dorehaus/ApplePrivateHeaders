/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@interface NSWindowSnappingPrefsViewController : NSViewController

@property (assign) char shouldLogSnapping; 
@property (assign) char shouldLogSnapVelocity; 
@property (assign) double snapDistance; 
@property (assign) double magneticSnapDistance; 
@property (assign) double snapVelocity; 
@property (assign) double unsnapVelocity; 
@property (assign) double unsnapDistance; 
@property (assign) double unsnapDistanceMin; 
@property (assign) double unsnapDistanceMax; 
@property (assign) double unsnapDistanceMaxAnglePoint; 
@property (assign) double resnapDistance; 
@property (assign) char shouldProvideHapticFeedback; 
@property (assign) char shouldProvideSoundFeedback; 
@property (assign) char shouldProvideVisualFeedback; 
@property (assign) char enableSnapping; 
@property (assign) char showSnapTargets; 
@property (assign) char flashSnappedToWindow; 
@property (assign) char allowWindowDocking; 
@property (assign) char smoothWindowMovement; 
@property (assign) char instantUnsnap; 
@property (assign) char onlySnapWhenApproaching; 
@property (assign) char smoothWindowWithAnimation; 
@property (assign) double gapBetweenWindows; 
@property (assign) char onlySmoothAnimateWhenNotInTheWindow; 
@property (assign) char snapToObscuredWindowEdges; 
-(void)viewDidLoad;
-(void)_prefsChanged:(id)arg1 ;
-(id)propertiesAsDictionary;
-(void)_reloadProperties;
-(void)resetToDefaults:(id)arg1 ;
-(char)shouldLogSnapping;
-(void)setShouldLogSnapping:(char)arg1 ;
-(char)shouldLogSnapVelocity;
-(void)setShouldLogSnapVelocity:(char)arg1 ;
-(double)snapDistance;
-(void)setSnapDistance:(double)arg1 ;
-(double)magneticSnapDistance;
-(void)setMagneticSnapDistance:(double)arg1 ;
-(double)snapVelocity;
-(void)setSnapVelocity:(double)arg1 ;
-(double)unsnapVelocity;
-(void)setUnsnapVelocity:(double)arg1 ;
-(double)unsnapDistance;
-(void)setUnsnapDistance:(double)arg1 ;
-(double)unsnapDistanceMin;
-(void)setUnsnapDistanceMin:(double)arg1 ;
-(double)unsnapDistanceMax;
-(void)setUnsnapDistanceMax:(double)arg1 ;
-(double)resnapDistance;
-(void)setResnapDistance:(double)arg1 ;
-(double)unsnapDistanceMaxAnglePoint;
-(void)setUnsnapDistanceMaxAnglePoint:(double)arg1 ;
-(char)shouldProvideHapticFeedback;
-(void)setShouldProvideHapticFeedback:(char)arg1 ;
-(char)shouldProvideSoundFeedback;
-(void)setShouldProvideSoundFeedback:(char)arg1 ;
-(char)shouldProvideVisualFeedback;
-(void)setShouldProvideVisualFeedback:(char)arg1 ;
-(char)enableSnapping;
-(void)setEnableSnapping:(char)arg1 ;
-(char)showSnapTargets;
-(void)setShowSnapTargets:(char)arg1 ;
-(char)flashSnappedToWindow;
-(void)setFlashSnappedToWindow:(char)arg1 ;
-(char)allowWindowDocking;
-(void)setAllowWindowDocking:(char)arg1 ;
-(char)smoothWindowMovement;
-(void)setSmoothWindowMovement:(char)arg1 ;
-(char)instantUnsnap;
-(void)setInstantUnsnap:(char)arg1 ;
-(char)onlySnapWhenApproaching;
-(void)setOnlySnapWhenApproaching:(char)arg1 ;
-(char)smoothWindowWithAnimation;
-(void)setSmoothWindowWithAnimation:(char)arg1 ;
-(double)gapBetweenWindows;
-(void)setGapBetweenWindows:(double)arg1 ;
-(char)onlySmoothAnimateWhenNotInTheWindow;
-(void)setOnlySmoothAnimateWhenNotInTheWindow:(char)arg1 ;
-(char)snapToObscuredWindowEdges;
-(void)setSnapToObscuredWindowEdges:(char)arg1 ;
@end


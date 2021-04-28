/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLLocation;


@protocol MNTimeballLocationProvider <NSObject>
@property (assign,nonatomic) double desiredAccuracy; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate; 
@required
-(id<CLLocationManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(CLLocation *)location;
-(void)setDesiredAccuracy:(double)arg1;
-(id)initWithEffectiveBundle:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
-(void)stopUpdatingLocation;
-(void)startUpdatingLocation;
-(double)desiredAccuracy;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;

@end


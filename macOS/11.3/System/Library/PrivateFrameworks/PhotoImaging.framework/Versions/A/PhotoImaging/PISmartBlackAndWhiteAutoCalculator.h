/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@class NSString;

@interface PISmartBlackAndWhiteAutoCalculator : NUAutoCalculator <NUTimeBased>

@property (assign,nonatomic) SCD_Struct_PI7 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)submit:(/*^block*/id)arg1 ;
-(id)_calculateBlackAndWhiteSettingsFromBufferImage:(id)arg1 ;
@end


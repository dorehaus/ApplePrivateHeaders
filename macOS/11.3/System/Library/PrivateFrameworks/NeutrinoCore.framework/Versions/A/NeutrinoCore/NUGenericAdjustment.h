/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUAdjustment.h>

@class NSMutableDictionary, NSDictionary;

@interface NUGenericAdjustment : NUAdjustment {

	NSMutableDictionary* _settings;

}

@property (nonatomic,copy) NSDictionary * settings; 
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(NSDictionary *)settings;
-(void)setSettings:(NSDictionary *)arg1 ;
-(id)initWithAdjustmentSchema:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMRequestBase.h>
#import <libobjc.A.dylib/HMExecuteOperation.h>

@class HMActionSet, NSString;

@interface HMExecuteRequest : HMRequestBase <HMExecuteOperation> {

	HMActionSet* _actionSet;

}

@property (nonatomic,readonly) HMActionSet * actionSet;              //@synthesize actionSet=_actionSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)executeRequestWithActionSet:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithActionSet:(id)arg1 ;
-(HMActionSet *)actionSet;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSArray, NSString;

@interface SAErrorIndicatorStatus : AceObject <SABackgroundContextObject>

@property (assign,nonatomic) char deviceFixingProblems; 
@property (nonatomic,copy) NSArray * values; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorIndicatorStatus;
+(id)errorIndicatorStatusWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)values;
-(id)groupIdentifier;
-(void)setValues:(NSArray *)arg1 ;
-(id)encodedClassName;
-(char)deviceFixingProblems;
-(void)setDeviceFixingProblems:(char)arg1 ;
@end


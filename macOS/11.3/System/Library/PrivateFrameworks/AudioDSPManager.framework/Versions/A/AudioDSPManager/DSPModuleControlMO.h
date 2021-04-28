/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioDSPManager.framework/Versions/A/AudioDSPManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, DSPModuleMO;

@interface DSPModuleControlMO : NSManagedObject

@property (assign,nonatomic) char isDefault; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) int virtualChannelCount; 
@property (nonatomic,retain) NSSet * aggregation; 
@property (nonatomic,retain) NSSet * contentDSP; 
@property (nonatomic,retain) DSPModuleMO * module; 
+(id)fetchRequest;
@end


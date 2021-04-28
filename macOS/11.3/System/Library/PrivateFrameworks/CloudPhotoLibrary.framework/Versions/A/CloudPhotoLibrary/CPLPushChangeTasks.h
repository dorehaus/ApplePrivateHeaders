/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSMutableDictionary;

@interface CPLPushChangeTasks : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _tasksByType;
	NSMutableDictionary* _mutableTasksByType;

}

@property (nonatomic,readonly) char hasTasks; 
+(char)supportsSecureCoding;
+(id)descriptionForTaskType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)enumerateScopedTasksWithBlock:(/*^block*/id)arg1 ;
-(char)hasTasks;
-(void)_commitTasks;
-(id)initEmpty;
-(void)enumerateTasksWithBlock:(/*^block*/id)arg1 ;
-(void)addTask:(long long)arg1 forRecordWithScopedIdentifier:(id)arg2 ;
-(id)_descriptionFromTasksByType:(id)arg1 ;
-(id)invalidRecordScopedIdentifiers;
-(id)invalidRecordIdentifiers;
@end


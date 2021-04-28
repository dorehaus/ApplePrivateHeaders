/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class NSMutableDictionary, NSArray, BRCAccountSession;

@interface BRCProgress : NSProgress {

	NSMutableDictionary* _progressByAliasContainerID;
	char _published;
	NSArray* _parentFileIDs;
	BRCAccountSession* _session;
	char _group;

}

@property (nonatomic,readonly) NSArray * parentFileIDs;              //@synthesize parentFileIDs=_parentFileIDs - In the implementation block
@property (nonatomic,readonly) char isPublished;                     //@synthesize published=_published - In the implementation block
+(id)_progressForDocument:(id)arg1 group:(char)arg2 sizeInfo:(id)arg3 ;
+(id)downloadProgressForDocument:(id)arg1 sizeInfo:(id)arg2 ;
+(id)uploadProgressForDocument:(id)arg1 sizeInfo:(id)arg2 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(NSArray *)parentFileIDs;
-(char)isPublished;
-(void)brc_publish;
-(void)brc_unpublish;
-(id)initWithGroup:(char)arg1 parentFileIDs:(id)arg2 session:(id)arg3 ;
-(void)addAliasItem:(id)arg1 ;
@end

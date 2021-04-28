/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WFWorkflowRecord;

@interface WFWorkflowConflict : NSObject {

	NSString* _localWorkflowID;
	WFWorkflowRecord* _localWorkflowRecord;
	NSString* _remoteWorkflowID;
	WFWorkflowRecord* _remoteWorkflowRecord;

}

@property (nonatomic,copy) NSString * localWorkflowID;                             //@synthesize localWorkflowID=_localWorkflowID - In the implementation block
@property (nonatomic,retain) WFWorkflowRecord * localWorkflowRecord;               //@synthesize localWorkflowRecord=_localWorkflowRecord - In the implementation block
@property (nonatomic,copy) NSString * remoteWorkflowID;                            //@synthesize remoteWorkflowID=_remoteWorkflowID - In the implementation block
@property (nonatomic,retain) WFWorkflowRecord * remoteWorkflowRecord;              //@synthesize remoteWorkflowRecord=_remoteWorkflowRecord - In the implementation block
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)localWorkflowID;
-(void)setLocalWorkflowID:(NSString *)arg1 ;
-(NSString *)remoteWorkflowID;
-(void)setRemoteWorkflowID:(NSString *)arg1 ;
-(id)resolutionKeepingLocal:(char)arg1 keepingRemote:(char)arg2 ;
-(WFWorkflowRecord *)localWorkflowRecord;
-(void)setLocalWorkflowRecord:(WFWorkflowRecord *)arg1 ;
-(WFWorkflowRecord *)remoteWorkflowRecord;
-(void)setRemoteWorkflowRecord:(WFWorkflowRecord *)arg1 ;
@end


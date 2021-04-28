/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BRCAccountSession, NSMutableDictionary, NSMapTable;

@interface BRCDownloadTrackers : NSObject {

	BRCAccountSession* _session;
	NSMutableDictionary* _trackersByDocID;
	NSMapTable* _docIDsByTracker;

}
-(id)initWithSession:(id)arg1 ;
-(void)addDownloadTracker:(id)arg1 forItemWithDocID:(id)arg2 ;
-(void)removeDownloadTracker:(id)arg1 ;
-(void)document:(id)arg1 didCompleteDownloadWithError:(id)arg2 ;
-(unsigned long long)spaceRequiredForTrackers;
-(char)hasPendingTrackerForDocumentID:(id)arg1 ;
@end


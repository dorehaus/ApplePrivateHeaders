/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISDownloadQueueObserver
@required
-(void)downloadQueueDidAddDownload:(id)arg1;
-(void)downloadQueueDidRemoveDownload:(id)arg1 queueIsIdle:(char)arg2;
-(void)download:(id)arg1 didUpdateStatus:(id)arg2;
-(void)downloadQueueDidCheckServerDownloadQueueForAccount:(id)arg1 withDownloadCount:(long long)arg2 newDownloads:(id)arg3;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BRItemNotificationSending <BRCancellable>
@required
-(void)boostPriority:(/*^block*/id)arg1;
-(void)watchItemAtURL:(id)arg1 options:(unsigned short)arg2 gatherReply:(/*^block*/id)arg3;
-(void)watchItemsNamesPrefixedBy:(id)arg1 inScopes:(unsigned short)arg2 appLibraryIDs:(id)arg3 gatherReply:(/*^block*/id)arg4;
-(void)watchScopes:(unsigned short)arg1 appLibraryIDs:(id)arg2 gatherReply:(/*^block*/id)arg3;
-(void)watchScopes:(unsigned short)arg1 gatherReply:(/*^block*/id)arg2;

@end


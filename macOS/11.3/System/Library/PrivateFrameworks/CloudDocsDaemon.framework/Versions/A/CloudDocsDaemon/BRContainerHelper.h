/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BRContainerHelper <NSObject>
@required
-(id)itemIDForURL:(id)arg1 error:(id*)arg2;
-(unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id*)arg3;
-(id)fetchContainerForURL:(id)arg1;
-(id)fetchAllContainersByIDWithError:(id*)arg1;
-(char)canFetchAllContainersByID;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapsSync.MapsSyncDataQueryDelegate
@optional
-(void)queryIsReadyWithQuery:(id)arg1;
-(void)queryContentsWillChangeWithQuery:(id)arg1;
-(void)queryContentsDidChangeObjectWithQuery:(id)arg1 object:(id)arg2 indexPath:(id)arg3 changeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
-(void)queryContentsDidLoadWithQuery:(id)arg1;

@required
-(void)queryContentsDidChangeWithQuery:(id)arg1;

@end


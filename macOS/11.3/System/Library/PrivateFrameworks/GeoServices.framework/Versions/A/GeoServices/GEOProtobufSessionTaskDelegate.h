/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOProtobufSessionTaskDelegate <NSObject>
@optional
-(void)protobufSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)protobufSession:(id)arg1 validateResponse:(id)arg2;

@required
-(void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;

@end


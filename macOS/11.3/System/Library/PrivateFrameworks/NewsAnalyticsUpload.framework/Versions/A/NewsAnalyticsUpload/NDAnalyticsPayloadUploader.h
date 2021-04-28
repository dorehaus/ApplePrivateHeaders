/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/Versions/A/NewsAnalyticsUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCAnalyticsEndpointConnection, FCAsyncSerialQueue;

@interface NDAnalyticsPayloadUploader : NSObject {

	FCAnalyticsEndpointConnection* _endpointConnection;
	FCAsyncSerialQueue* _uploadQueue;

}

@property (nonatomic,retain) FCAnalyticsEndpointConnection * endpointConnection;              //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * uploadQueue;                                //@synthesize uploadQueue=_uploadQueue - In the implementation block
-(id)init;
-(FCAnalyticsEndpointConnection *)endpointConnection;
-(void)setEndpointConnection:(FCAnalyticsEndpointConnection *)arg1 ;
-(id)initWithAppConfigurationManager:(id)arg1 ;
-(void)uploadPayloadsForInfos:(id)arg1 withEnvelopeStore:(id)arg2 perPayloadCompletion:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(FCAsyncSerialQueue *)uploadQueue;
-(void)setUploadQueue:(FCAsyncSerialQueue *)arg1 ;
@end


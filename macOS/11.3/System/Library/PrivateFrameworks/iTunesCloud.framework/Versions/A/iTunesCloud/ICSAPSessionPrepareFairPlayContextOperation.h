/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSAPSession;

@interface ICSAPSessionPrepareFairPlayContextOperation : ICAsyncOperation {

	ICSAPSession* _sapSession;
	/*^block*/id _responseHandler;

}

@property (nonatomic,retain) ICSAPSession * sapSession;              //@synthesize sapSession=_sapSession - In the implementation block
@property (nonatomic,copy) id responseHandler;                       //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)_exchangeDataWithSAPContext:(id)arg1 requestContext:(id)arg2 setupURL:(id)arg3 responseData:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(ICSAPSession *)sapSession;
-(void)setSapSession:(ICSAPSession *)arg1 ;
@end

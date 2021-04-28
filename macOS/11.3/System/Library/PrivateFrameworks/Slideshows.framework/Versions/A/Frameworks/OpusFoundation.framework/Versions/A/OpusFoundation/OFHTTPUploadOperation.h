/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusFoundation.framework/Versions/A/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OFHTTPOperation.h>

@class NSURL, NSMutableData;

@interface OFHTTPUploadOperation : OFHTTPOperation {

	NSURL* _fileURL;
	NSMutableData* _receivedData;

}

@property (copy) NSURL * fileURL;                             //@synthesize fileURL=_fileURL - In the implementation block
@property (retain) NSMutableData * receivedData;              //@synthesize receivedData=_receivedData - In the implementation block
+(id)operationWithURL:(id)arg1 headers:(id)arg2 fileURLToUpload:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(NSURL *)fileURL;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSMutableData *)receivedData;
-(void)finishOperation;
-(void)cancelOperation;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(unsigned long long)launchOperation;
-(void)cleanupOperation;
-(id)initWithURL:(id)arg1 headers:(id)arg2 fileURLToUpload:(id)arg3 ;
@end

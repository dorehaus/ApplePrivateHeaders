/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDAccessoryDataStreamAdapterDelegate.h>

@protocol OS_dispatch_queue;
@class HMDHAPAccessory, NSObject, NSString, HMDAccessoryDiagnosticsSettings, HMDAccessoryDataStreamAdapter, NSDictionary, NSNumber, NSFileHandle;

@interface HMDAccessoryDiagnosticsSession : HMFObject <HMFLogging, HMDAccessoryDataStreamAdapterDelegate> {

	char _readyForDataTransfer;
	HMDHAPAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _reason;
	HMDAccessoryDiagnosticsSettings* _settings;
	HMDAccessoryDataStreamAdapter* _dataStream;
	/*^block*/id _pendingCompletionHandler;
	NSString* _filePath;
	NSDictionary* _urlParameters;
	NSNumber* _expectedDataSequenceNumber;
	NSFileHandle* _fileHandle;
	unsigned long long _maxBytes;
	unsigned long long _bytesWritten;

}

@property (assign,nonatomic) unsigned long long maxBytes;                     //@synthesize maxBytes=_maxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long bytesWritten;                 //@synthesize bytesWritten=_bytesWritten - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory;                      //@synthesize accessory=_accessory - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSString * reason;                                       //@synthesize reason=_reason - In the implementation block
@property (readonly) HMDAccessoryDiagnosticsSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (retain) HMDAccessoryDataStreamAdapter * dataStream;                //@synthesize dataStream=_dataStream - In the implementation block
@property (copy) id pendingCompletionHandler;                                 //@synthesize pendingCompletionHandler=_pendingCompletionHandler - In the implementation block
@property (copy) NSString * filePath;                                         //@synthesize filePath=_filePath - In the implementation block
@property (copy) NSDictionary * urlParameters;                                //@synthesize urlParameters=_urlParameters - In the implementation block
@property (retain) NSNumber * expectedDataSequenceNumber;                     //@synthesize expectedDataSequenceNumber=_expectedDataSequenceNumber - In the implementation block
@property (retain) NSFileHandle * fileHandle;                                 //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign) char readyForDataTransfer;                                 //@synthesize readyForDataTransfer=_readyForDataTransfer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(NSString *)reason;
-(id)fileExtension;
-(NSString *)filePath;
-(void)setFilePath:(NSString *)arg1 ;
-(NSFileHandle *)fileHandle;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDAccessoryDiagnosticsSettings *)settings;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(HMDHAPAccessory *)accessory;
-(unsigned long long)maxBytes;
-(unsigned long long)bytesWritten;
-(void)setBytesWritten:(unsigned long long)arg1 ;
-(void)shutDown;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(NSDictionary *)urlParameters;
-(char)_handleReceivedData:(id)arg1 ;
-(char)readyForDataTransfer;
-(char)dataStreamAdapter:(id)arg1 didReceiveData:(id)arg2 ;
-(void)dataStreamAdapterDidFailDataRead:(id)arg1 ;
-(void)dataStreamAdapterDidCompleteDataRead:(id)arg1 ;
-(void)setDataStream:(HMDAccessoryDataStreamAdapter *)arg1 ;
-(HMDAccessoryDataStreamAdapter *)dataStream;
-(id)pendingCompletionHandler;
-(void)_callCompletionHandlerWithError:(id)arg1 ;
-(void)setReadyForDataTransfer:(char)arg1 ;
-(void)setExpectedDataSequenceNumber:(NSNumber *)arg1 ;
-(void)setPendingCompletionHandler:(id)arg1 ;
-(void)setUrlParameters:(NSDictionary *)arg1 ;
-(char)_validDataSequenceNumber:(id)arg1 ;
-(id)_createLogFile;
-(NSNumber *)expectedDataSequenceNumber;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 settings:(id)arg3 ;
-(void)setUpWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)readDataWithCompletion:(/*^block*/id)arg1 ;
-(void)setMaxBytes:(unsigned long long)arg1 ;
@end


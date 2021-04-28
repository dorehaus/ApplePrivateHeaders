/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLook.framework/Versions/A/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, QLDataGenerationHandler;
#import <QuickLook/QuickLook-Structs.h>
@class NSUUID, NSObject, NSMutableArray;

@interface QLRequestSession : NSObject {

	_QLRequest* _request;
	void* _mangledID;
	const void* _documentObject;
	SCD_Struct_QL8* _callbacks;
	unsigned _reply_port;
	NSUUID* _uuid;
	NSObject*<OS_dispatch_source> _portDeathSource;
	char _keepAlive;
	char _isValid;
	id<QLDataGenerationHandler> _dataHandler;
	NSMutableArray* _storedData;

}

@property (assign) char isValid;                                               //@synthesize isValid=_isValid - In the implementation block
@property (assign,nonatomic) void* mangledID;                                  //@synthesize mangledID=_mangledID - In the implementation block
@property (assign) _QLRequest* request;                                        //@synthesize request=_request - In the implementation block
@property (readonly) SCD_Struct_QL8* callbacks;                                //@synthesize callbacks=_callbacks - In the implementation block
@property (assign) unsigned reply_port;                                        //@synthesize reply_port=_reply_port - In the implementation block
@property (readonly) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> portDeathSource;              //@synthesize portDeathSource=_portDeathSource - In the implementation block
@property (retain) id<QLDataGenerationHandler> dataHandler;                    //@synthesize dataHandler=_dataHandler - In the implementation block
@property (retain) NSMutableArray * storedData;                                //@synthesize storedData=_storedData - In the implementation block
@property (assign) char keepAlive;                                             //@synthesize keepAlive=_keepAlive - In the implementation block
+(void)disableInstantOff;
+(void)enableInstantOff;
+(void)_updateCrashReportMessage;
+(id)getSessionFromReplyPort:(unsigned)arg1 ;
+(char)setupSession:(_QLRequest*)arg1 ;
+(void)unsetupSession:(_QLRequest*)arg1 ;
+(void)setupCrashReportMessageForRequest:(_QLRequest*)arg1 ;
+(id)sessionFromUUID:(id)arg1 ;
+(id)getSessionAndNotifyPortDeathWithPort:(unsigned)arg1 ;
+(unsigned long long)sessionCount;
+(void)discardAllSessions:(char)arg1 ;
+(char)isInstantOffEnabled;
+(void)setupSessions:(char)arg1 deadPortBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(void)invalidate;
-(char)isValid;
-(NSUUID *)uuid;
-(_QLRequest*)request;
-(void)setIsValid:(char)arg1 ;
-(SCD_Struct_QL8*)callbacks;
-(void)setRequest:(_QLRequest*)arg1 ;
-(void*)mangledID;
-(void)setMangledID:(void*)arg1 ;
-(void)setDocumentObject:(const void*)arg1 callbacks:(const SCD_Struct_QL8*)arg2 ;
-(void)handleSendDataWithAttachmentURL:(id)arg1 lastChunk:(char)arg2 ;
-(void)handleStartAttachment:(id)arg1 mimeType:(id)arg2 encoding:(id)arg3 ;
-(unsigned)reply_port;
-(void)setPortDeathSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setReply_port:(unsigned)arg1 ;
-(id<QLDataGenerationHandler>)dataHandler;
-(NSMutableArray *)storedData;
-(void)setKeepAlive:(char)arg1 ;
-(void)setDataHandler:(id<QLDataGenerationHandler>)arg1 ;
-(id)initWithReplyPort:(unsigned)arg1 uuid:(id)arg2 ;
-(char)keepAlive;
-(void)handleGetData:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)portDeathSource;
-(void)setStoredData:(NSMutableArray *)arg1 ;
@end


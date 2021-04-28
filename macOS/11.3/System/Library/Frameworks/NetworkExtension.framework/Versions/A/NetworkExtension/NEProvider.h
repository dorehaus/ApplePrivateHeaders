/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NWPath, NWPathEvaluator, NEExtensionProviderContext, NSString;

@interface NEProvider : NSObject <NSExtensionRequestHandling> {

	NWPath* _defaultPath;
	NWPathEvaluator* _defaultPathEvaluator;
	NEExtensionProviderContext* _context;
	NSString* _appName;

}

@property (retain) NWPathEvaluator * defaultPathEvaluator;              //@synthesize defaultPathEvaluator=_defaultPathEvaluator - In the implementation block
@property (retain) NWPath * defaultPath;                                //@synthesize defaultPath=_defaultPath - In the implementation block
@property (retain) NEExtensionProviderContext * context;                //@synthesize context=_context - In the implementation block
@property (retain) NSString * appName;                                  //@synthesize appName=_appName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isRunningInProvider;
+(char)isNEProviderBundle:(id)arg1 forExtensionPoint:(id)arg2 ;
+(void)startSystemExtensionMode;
-(void)setdefaultPathObserver:(id)arg1 ;
-(void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initAllowUnentitled:(char)arg1 ;
-(void)setDefaultPath:(NWPath *)arg1 ;
-(void)setDefaultPathEvaluator:(NWPathEvaluator *)arg1 ;
-(id)createTCPConnectionToEndpoint:(id)arg1 enableTFO:(char)arg2 initialData:(id)arg3 enableMultipath:(char)arg4 enableTLS:(char)arg5 TLSParameters:(id)arg6 delegate:(id)arg7 URL:(id)arg8 ;
-(id)createTCPConnectionToEndpoint:(id)arg1 enableTLS:(char)arg2 TLSParameters:(id)arg3 delegate:(id)arg4 ;
-(id)createTCPConnectionToEndpoint:(id)arg1 enableTFO:(char)arg2 initialData:(id)arg3 enableMultipath:(char)arg4 enableTLS:(char)arg5 TLSParameters:(id)arg6 delegate:(id)arg7 ;
-(id)createUDPSessionToEndpoint:(id)arg1 fromEndpoint:(id)arg2 ;
-(void)displayMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(NEExtensionProviderContext *)context;
-(void)setContext:(NEExtensionProviderContext *)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(NWPath *)defaultPath;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appName;
-(void)wake;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(NWPathEvaluator *)defaultPathEvaluator;
@end

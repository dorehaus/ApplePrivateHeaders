/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface FPTask : NSObject {

	NSArray* _argv;
	NSString* _redirectStdoutToFileAtPath;
	int _redirectStdoutToFileDescriptor;
	NSString* _redirectStderrToFileAtPath;
	int _redirectStderrToFileDescriptor;
	int _waitStatus;

}

@property (nonatomic,retain) NSArray * argv;                                     //@synthesize argv=_argv - In the implementation block
@property (nonatomic,retain) NSString * redirectStdoutToFileAtPath;              //@synthesize redirectStdoutToFileAtPath=_redirectStdoutToFileAtPath - In the implementation block
@property (assign,nonatomic) int redirectStdoutToFileDescriptor;                 //@synthesize redirectStdoutToFileDescriptor=_redirectStdoutToFileDescriptor - In the implementation block
@property (nonatomic,retain) NSString * redirectStderrToFileAtPath;              //@synthesize redirectStderrToFileAtPath=_redirectStderrToFileAtPath - In the implementation block
@property (assign,nonatomic) int redirectStderrToFileDescriptor;                 //@synthesize redirectStderrToFileDescriptor=_redirectStderrToFileDescriptor - In the implementation block
@property (nonatomic,readonly) int waitStatus;                                   //@synthesize waitStatus=_waitStatus - In the implementation block
+(id)taskWithCommandWithArguments:(id)arg1 ;
+(id)taskWithCommand:(id)arg1 ;
+(id)sanitizeStringForFilename:(id)arg1 ;
+(id)taskWithRedirectedOutputAndCommand:(id)arg1 ;
+(id)taskWithArguments:(id)arg1 ;
-(id)init;
-(void)setCommandWithArguments:(id)arg1 ;
-(void)setArgv:(NSArray *)arg1 ;
-(NSArray *)argv;
-(NSString *)redirectStdoutToFileAtPath;
-(NSString *)redirectStderrToFileAtPath;
-(int)redirectStdoutToFileDescriptor;
-(int)redirectStderrToFileDescriptor;
-(void)setRedirectStdoutToFileAtPath:(NSString *)arg1 ;
-(void)setRedirectStdoutToFileDescriptor:(int)arg1 ;
-(void)setRedirectStderrToFileAtPath:(NSString *)arg1 ;
-(void)setRedirectStderrToFileDescriptor:(int)arg1 ;
-(void)setCommand:(id)arg1 ;
-(int)exec;
-(void)resetRedirect;
-(int)waitStatus;
-(int)_prepareRedirections:(void*)arg1 ;
-(int)execAsync;
@end


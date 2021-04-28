/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSOutputStream, NSString;

@interface NviDataLogger : NSObject <NSStreamDelegate> {

	NSOutputStream* _oStream;

}

@property (nonatomic,retain) NSOutputStream * oStream;              //@synthesize oStream=_oStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(id)initWithFilePath:(id)arg1 appendHdr:(id)arg2 ;
-(void)logData:(id)arg1 ;
-(void)endRequest;
-(NSOutputStream *)oStream;
-(void)setOStream:(NSOutputStream *)arg1 ;
@end

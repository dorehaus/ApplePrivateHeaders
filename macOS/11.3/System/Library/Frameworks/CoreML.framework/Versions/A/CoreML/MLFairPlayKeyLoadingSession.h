/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreML/CoreML-Structs.h>
@class NSString;

@interface MLFairPlayKeyLoadingSession : NSObject {

	unsigned _sessionID;
	NSString* _keyIdentifier;
	SCD_Struct_ML57* _sessionContext;

}

@property (copy) NSString * keyIdentifier;                       //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (assign) unsigned sessionID;                           //@synthesize sessionID=_sessionID - In the implementation block
@property (assign) SCD_Struct_ML57* sessionContext;              //@synthesize sessionContext=_sessionContext - In the implementation block
-(void)dealloc;
-(id)init;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(SCD_Struct_ML57*)sessionContext;
-(id)transformKeyIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)generateKeyRequestForKeyIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)generatePersistentKeyBlobFromKeyResponse:(id)arg1 error:(id*)arg2 ;
-(NSString *)keyIdentifier;
-(void)setKeyIdentifier:(NSString *)arg1 ;
-(void)setSessionContext:(SCD_Struct_ML57*)arg1 ;
@end


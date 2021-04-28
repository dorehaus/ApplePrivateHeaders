/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSRegistrationProfileOperation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	int _genericError;
	NSString* _guid;
	int _pOSIXError;
	unsigned _registrationError;
	unsigned _resultCode;
	unsigned _success;
	int _uRLError;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) char hasSuccess; 
@property (assign,nonatomic) unsigned success;                          //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) char hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) char hasResultCode; 
@property (assign,nonatomic) unsigned resultCode;                       //@synthesize resultCode=_resultCode - In the implementation block
@property (assign,nonatomic) char hasRegistrationError; 
@property (assign,nonatomic) unsigned registrationError;                //@synthesize registrationError=_registrationError - In the implementation block
@property (assign,nonatomic) char hasGenericError; 
@property (assign,nonatomic) int genericError;                          //@synthesize genericError=_genericError - In the implementation block
@property (assign,nonatomic) char hasURLError; 
@property (assign,nonatomic) int uRLError;                              //@synthesize uRLError=_uRLError - In the implementation block
@property (assign,nonatomic) char hasPOSIXError; 
@property (assign,nonatomic) int pOSIXError;                            //@synthesize pOSIXError=_pOSIXError - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)connectionType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)success;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(unsigned)registrationError;
-(NSString *)guid;
-(unsigned)resultCode;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setRegistrationError:(unsigned)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(int)genericError;
-(void)setResultCode:(unsigned)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasConnectionType:(char)arg1 ;
-(char)hasConnectionType;
-(char)hasGuid;
-(void)setSuccess:(unsigned)arg1 ;
-(char)hasSuccess;
-(void)setHasSuccess:(char)arg1 ;
-(void)setGenericError:(int)arg1 ;
-(void)setHasGenericError:(char)arg1 ;
-(char)hasGenericError;
-(void)setHasRegistrationError:(char)arg1 ;
-(char)hasRegistrationError;
-(void)setHasResultCode:(char)arg1 ;
-(char)hasResultCode;
-(void)setURLError:(int)arg1 ;
-(void)setHasURLError:(char)arg1 ;
-(char)hasURLError;
-(void)setPOSIXError:(int)arg1 ;
-(void)setHasPOSIXError:(char)arg1 ;
-(char)hasPOSIXError;
-(int)uRLError;
-(int)pOSIXError;
@end


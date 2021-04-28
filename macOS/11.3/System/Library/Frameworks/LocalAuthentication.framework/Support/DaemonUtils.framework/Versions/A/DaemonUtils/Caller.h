/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/Versions/A/DaemonUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DaemonUtils/DaemonUtils-Structs.h>
@class NSXPCConnection, NSData;

@interface Caller : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,__weak,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) unsigned euid; 
@property (nonatomic,readonly) int asid; 
@property (nonatomic,readonly) SCD_Struct_Ca2 auditToken; 
@property (nonatomic,readonly) NSData * auditTokenData; 
+(id)current;
-(char)isEqualToAuditToken:(SCD_Struct_Ca2)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(unsigned)euid;
-(SCD_Struct_Ca2)auditToken;
-(int)pid;
-(char)hasEntitlement:(id)arg1 ;
-(NSData *)auditTokenData;
-(int)asid;
-(char)isEqualToAuditTokenData:(id)arg1 ;
@end

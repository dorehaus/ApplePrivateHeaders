/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RWIDriverConfiguration, RWIDriverState, _RWIRelayClientConnection, NSSet, NSString;

@interface _RWIDriverInterfaceInfo : NSObject {

	RWIDriverConfiguration* _configuration;
	RWIDriverState* _state;
	_RWIRelayClientConnection* _connection;
	NSSet* _sessionIdentifiers;

}

@property (nonatomic,readonly) _RWIRelayClientConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * version; 
@property (getter=isActive,nonatomic,readonly) char active; 
@property (nonatomic,copy,readonly) NSSet * sessionIdentifiers;                     //@synthesize sessionIdentifiers=_sessionIdentifiers - In the implementation block
-(NSString *)name;
-(_RWIRelayClientConnection *)connection;
-(NSString *)identifier;
-(NSString *)version;
-(char)isActive;
-(id)dictionaryRepresentation;
-(id)initWithConfiguration:(id)arg1 connection:(id)arg2 ;
-(void)updateDriverState:(id)arg1 ;
-(NSSet *)sessionIdentifiers;
@end


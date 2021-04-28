/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/WebInspector-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface RWIDriverState : NSObject <NSCopying> {

	char _active;
	NSSet* _sessionIdentifiers;

}

@property (assign,getter=isActive,nonatomic) char active;              //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSSet * sessionIdentifiers;                 //@synthesize sessionIdentifiers=_sessionIdentifiers - In the implementation block
+(id)active;
+(id)inactive;
+(id)decodeFromPayload:(id)arg1 ;
+(char)isValidPayload:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(char)isActive;
-(void)setActive:(char)arg1 ;
-(void)encodeToPayload:(id)arg1 ;
-(NSSet *)sessionIdentifiers;
-(void)setSessionIdentifiers:(NSSet *)arg1 ;
@end


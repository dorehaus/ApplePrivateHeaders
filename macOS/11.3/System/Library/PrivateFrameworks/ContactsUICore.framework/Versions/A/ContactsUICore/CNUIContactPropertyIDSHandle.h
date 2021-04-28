/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/CNUIIDSHandle.h>

@class NSString, CNContactProperty;

@interface CNUIContactPropertyIDSHandle : NSObject <CNUIIDSHandle> {

	CNContactProperty* _contactProperty;
	NSString* _idsID;

}

@property (nonatomic,copy,readonly) NSString * idsID;                                  //@synthesize idsID=_idsID - In the implementation block
@property (nonatomic,copy,readonly) CNContactProperty * contactProperty;               //@synthesize contactProperty=_contactProperty - In the implementation block
@property (nonatomic,copy,readonly) NSString * _cnui_IDSIDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedContactPropertyKeys;
+(id)idsIDForPhoneNumber:(id)arg1 ;
+(id)idsIDForEmail:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithContactProperty:(id)arg1 ;
-(CNContactProperty *)contactProperty;
-(NSString *)_cnui_IDSIDRepresentation;
-(NSString *)idsID;
@end

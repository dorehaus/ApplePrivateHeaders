/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKASMUser.h>

@protocol CRKASMNameComponents, CRKClassKitPerson;
@class NSString;

@interface CRKASMConcreteUser : NSObject <CRKASMUser> {

	NSString* _identifier;
	NSString* _appleID;
	id<CRKASMNameComponents> _nameComponents;
	id<CRKClassKitPerson> _backingPerson;

}

@property (nonatomic,readonly) id<CRKClassKitPerson> backingPerson;                  //@synthesize backingPerson=_backingPerson - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * appleID;                              //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,readonly) id<CRKASMNameComponents> nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(id<CRKASMNameComponents>)nameComponents;
-(NSString *)appleID;
-(id)initWithBackingPerson:(id)arg1 ;
-(char)isEqualToConcreteUser:(id)arg1 ;
-(id<CRKClassKitPerson>)backingPerson;
@end


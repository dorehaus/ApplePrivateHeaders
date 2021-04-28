/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKFieldMetadata : NSObject <NSSecureCoding> {

	char _shouldIgnoreField;
	char _foundExplicitlyRequestedPass;
	NSArray* _associatedPassIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * associatedPassIdentifiers;              //@synthesize associatedPassIdentifiers=_associatedPassIdentifiers - In the implementation block
@property (nonatomic,readonly) char shouldIgnoreField;                                //@synthesize shouldIgnoreField=_shouldIgnoreField - In the implementation block
@property (nonatomic,readonly) char foundExplicitlyRequestedPass;                     //@synthesize foundExplicitlyRequestedPass=_foundExplicitlyRequestedPass - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAssociatedPassIdentifiers:(id)arg1 shouldIgnoreField:(char)arg2 foundExplicitlyRequestedPass:(char)arg3 ;
-(NSArray *)associatedPassIdentifiers;
-(char)shouldIgnoreField;
-(char)foundExplicitlyRequestedPass;
@end

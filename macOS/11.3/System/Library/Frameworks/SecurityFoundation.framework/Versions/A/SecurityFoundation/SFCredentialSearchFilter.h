/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSDate, NSArray;

@interface SFCredentialSearchFilter : NSObject <NSCopying, NSSecureCoding> {

	id _credentialSearchFilterInternal;
	NSPredicate* _attributesPredicate;

}

@property (nonatomic,retain) NSDate * minimumCreationDate; 
@property (nonatomic,retain) NSDate * maximumCreationDate; 
@property (nonatomic,retain) NSDate * minimumModificationDate; 
@property (nonatomic,retain) NSDate * maximumModificationDate; 
@property (nonatomic,retain) NSArray*<_SFServiceIdentifier> serviceIdentifiers; 
@property (nonatomic,retain) NSArray * usernames; 
@property (nonatomic,retain) NSPredicate * attributesPredicate;                              //@synthesize attributesPredicate=_attributesPredicate - In the implementation block
+(char)supportsSecureCoding;
-(NSDate *)minimumCreationDate;
-(NSDate *)maximumCreationDate;
-(NSDate *)minimumModificationDate;
-(NSDate *)maximumModificationDate;
-(NSArray *)usernames;
-(void)setMinimumCreationDate:(NSDate *)arg1 ;
-(void)setMaximumCreationDate:(NSDate *)arg1 ;
-(void)setUsernames:(NSArray *)arg1 ;
-(void)setMinimumModificationDate:(NSDate *)arg1 ;
-(void)setMaximumModificationDate:(NSDate *)arg1 ;
-(NSPredicate *)attributesPredicate;
-(void)setAttributesPredicate:(NSPredicate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setServiceIdentifiers:(NSArray*<_SFServiceIdentifier>)arg1 ;
-(NSArray*<_SFServiceIdentifier>)serviceIdentifiers;
@end


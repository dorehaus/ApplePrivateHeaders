/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFProductInventoryResult.h>
@class NSString, NSArray, NSDictionary, NSData;


@protocol SFProductInventoryResult <NSObject>
@property (nonatomic,copy) NSString * productIdentifier; 
@property (nonatomic,copy) NSArray * availability; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)productIdentifier;
-(void)setProductIdentifier:(id)arg1;
-(NSArray *)availability;
-(void)setAvailability:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSData;

@interface SFProductInventoryResult : NSObject <SFProductInventoryResult, NSSecureCoding, NSCopying> {

	NSString* _productIdentifier;
	NSArray* _availability;

}

@property (nonatomic,copy) NSString * productIdentifier;                             //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * availability;                                   //@synthesize availability=_availability - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)productIdentifier;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSArray *)availability;
-(void)setAvailability:(NSArray *)arg1 ;
-(NSData *)jsonData;
-(id)initWithProtobuf:(id)arg1 ;
@end

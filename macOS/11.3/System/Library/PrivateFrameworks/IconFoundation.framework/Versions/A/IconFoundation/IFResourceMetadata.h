/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconFoundation.framework/Versions/A/IconFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IFResourceMetadata.h>
@class NSString, NSNumber;


@protocol IFResourceMetadata <NSObject>
@property (readonly) NSString * name; 
@property (readonly) NSNumber * dimension; 
@property (readonly) NSNumber * scale; 
@property (readonly) char selectedVariant; 
@required
-(NSString *)name;
-(char)selectedVariant;
-(NSNumber *)scale;
-(NSNumber *)dimension;

@end


@class NSString, NSNumber;

@interface IFResourceMetadata : NSObject <IFResourceMetadata> {

	char _selectedVariant;
	NSNumber* _diension;
	NSString* _name;
	NSNumber* _scale;

}

@property (retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (retain) NSNumber * dimension;                            //@synthesize diension=_diension - In the implementation block
@property (retain) NSNumber * scale;                                //@synthesize scale=_scale - In the implementation block
@property (assign) char selectedVariant;                            //@synthesize selectedVariant=_selectedVariant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metadataWithFileName:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(char)selectedVariant;
-(NSNumber *)scale;
-(NSNumber *)dimension;
-(void)setScale:(NSNumber *)arg1 ;
-(void)setDimension:(NSNumber *)arg1 ;
-(void)setSelectedVariant:(char)arg1 ;
@end


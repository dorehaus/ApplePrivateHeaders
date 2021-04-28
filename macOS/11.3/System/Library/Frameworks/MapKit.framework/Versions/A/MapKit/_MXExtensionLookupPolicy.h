/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MXExtensionLookupPolicy.h>

@protocol _MXExtensionLookupPolicy <NSObject>
@required
-(id)extensionPredicate;

@end


@class NSPredicate, NSString;

@interface _MXExtensionLookupPolicy : NSObject <_MXExtensionLookupPolicy> {

	NSPredicate* _extensionPredicate;

}

@property (nonatomic,retain) NSPredicate * extensionPredicate;              //@synthesize extensionPredicate=_extensionPredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPredicate:(id)arg1 ;
-(NSPredicate *)extensionPredicate;
-(void)setExtensionPredicate:(NSPredicate *)arg1 ;
@end


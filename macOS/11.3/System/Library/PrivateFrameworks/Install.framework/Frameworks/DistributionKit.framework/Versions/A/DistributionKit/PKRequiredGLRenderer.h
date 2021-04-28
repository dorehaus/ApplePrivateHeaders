/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Frameworks/DistributionKit.framework/Versions/A/DistributionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, NSString;

@interface PKRequiredGLRenderer : NSObject {

	long long _queryVersion;
	NSArray* _extensions;
	NSDictionary* _symbolTable;

}

@property (readonly) double version; 
@property (retain,readonly) NSArray * extensions; 
@property (retain,readonly) NSDictionary * limits; 
@property (retain,readonly) NSString * vendorName; 
@property (retain,readonly) NSString * rendererName; 
-(id)initWithQueryVersion:(long long)arg1 symbols:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(double)version;
-(NSString *)vendorName;
-(id)valueForKeyPath:(id)arg1 ;
-(NSDictionary *)limits;
-(NSString *)rendererName;
-(NSArray *)extensions;
@end


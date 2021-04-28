/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XCTAutomationSupport/XCTAutomationSupport-Structs.h>
#import <XCTAutomationSupport/XCTElementSetTransformer.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet;

@interface XCTElementSetCodableTransformer : NSObject <XCTElementSetTransformer, NSSecureCoding> {

	char _stopsOnFirstMatch;
	NSString* _transformationDescription;

}

@property (copy) NSString * transformationDescription;                   //@synthesize transformationDescription=_transformationDescription - In the implementation block
@property (readonly) char supportsAttributeKeyPathAnalysis; 
@property (assign) char stopsOnFirstMatch;                               //@synthesize stopsOnFirstMatch=_stopsOnFirstMatch - In the implementation block
@property (copy,readonly) NSSet * elementTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(void)provideCapabilitiesToBuilder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)transform:(id)arg1 relatedElements:(id*)arg2 ;
-(char)canBeRemotelyEvaluatedWithCapabilities:(id)arg1 ;
-(char)supportsAttributeKeyPathAnalysis;
-(id)requiredKeyPathsOrError:(id*)arg1 ;
-(id)iteratorForInput:(id)arg1 ;
-(NSSet *)elementTypes;
-(char)stopsOnFirstMatch;
-(void)setStopsOnFirstMatch:(char)arg1 ;
-(NSString *)transformationDescription;
-(void)setTransformationDescription:(NSString *)arg1 ;
@end


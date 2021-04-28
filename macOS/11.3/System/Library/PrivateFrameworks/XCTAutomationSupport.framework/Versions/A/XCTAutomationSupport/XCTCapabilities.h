/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface XCTCapabilities : NSObject <NSSecureCoding> {

	NSDictionary* _capabilitiesDictionary;

}

@property (copy,readonly) NSDictionary * capabilitiesDictionary;                //@synthesize capabilitiesDictionary=_capabilitiesDictionary - In the implementation block
@property (copy,readonly) NSDictionary * dictionaryRepresentation; 
+(char)supportsSecureCoding;
+(id)emptyCapabilities;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(char)hasCapability:(id)arg1 ;
-(NSDictionary *)capabilitiesDictionary;
-(unsigned long long)versionForCapability:(id)arg1 ;
@end


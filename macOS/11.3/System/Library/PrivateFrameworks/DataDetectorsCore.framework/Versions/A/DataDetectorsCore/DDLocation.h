/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DDLocation : NSObject <NSSecureCoding> {

	NSString* _fileName;
	int _firstLine;
	int _firstColumn;
	int _lastLine;
	int _lastColumn;

}

@property (copy,readonly) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (readonly) int firstLine;                         //@synthesize firstLine=_firstLine - In the implementation block
@property (readonly) int firstColumn;                       //@synthesize firstColumn=_firstColumn - In the implementation block
@property (readonly) int lastLine;                          //@synthesize lastLine=_lastLine - In the implementation block
@property (readonly) int lastColumn;                        //@synthesize lastColumn=_lastColumn - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithFileName:(id)arg1 firstLine:(int)arg2 firstColumn:(int)arg3 lastLine:(int)arg4 lastColumn:(int)arg5 ;
-(id)initWithFileName:(id)arg1 position:(_DDExpressionPosition)arg2 ;
-(int)lastLine;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_DDExpressionPosition)position;
-(int)lastColumn;
-(NSString *)fileName;
-(int)firstLine;
-(int)firstColumn;
@end


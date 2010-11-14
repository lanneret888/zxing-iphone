//
//  UniversalResultParser.h
//  ZXingWidget
//
//  Created by Romain Pechayre on 11/14/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResultParser.h"

@interface UniversalResultParser : ResultParser {
  NSMutableArray *parsers;
}

@property(nonatomic,retain) NSMutableArray *parsers;

- (id) initWithDefaultParsers;
- (ParsedResult *)resultForString:(NSString *)theString;
@end

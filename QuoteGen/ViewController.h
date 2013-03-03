//
//  ViewController.h
//  QuoteGen
//
//  Created by Alex Veit on 2/24/13.
//  Copyright (c) 2013 Alex Veit. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) NSArray *myQuotes;
@property (nonatomic, strong) NSMutableArray *movieQuotes;
@property (nonatomic, strong) IBOutlet UITextView *quoteText;

@end
